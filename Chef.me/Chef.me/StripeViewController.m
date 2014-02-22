//
//  StripeViewController.m
//  Chef.me
//
//  Created by Kushan Shah on 2/17/14.
//  Copyright (c) 2014 Codepath. All rights reserved.
//

#import "StripeViewController.h"

@interface StripeViewController ()
@property (nonatomic, strong) STPView *cardView;
@end

@implementation StripeViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        
    }
    return self;
}

- (id) initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    if(self) {
        
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.navigationController.navigationBar.translucent = NO;
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (void)stripeView:(STPView *)view withCard:(PKCard *)card isValid:(BOOL)valid
{
    // Enable the "save" button only if the card form is complete.
    self.navigationItem.rightBarButtonItem.enabled = valid;
    [self.view endEditing:YES];
    
}

- (IBAction)onTapButton:(id)sender {
    self.cardView = [[STPView alloc] initWithFrame:CGRectMake(15,20,290,55) andKey:@"my_publishable_key"];
    [self.view addSubview:self.cardView];
    
    self.cardView.delegate = self; // implement STPViewDelegate
//    [self.navigationController setNavigationBarHidden:YES];
    [self.cardView createToken:^(STPToken *token, NSError *error) {
        if (error) {
            
        } else {
            
        }
    }];
}
@end
