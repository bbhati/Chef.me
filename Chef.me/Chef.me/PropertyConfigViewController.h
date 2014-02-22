//
//  PropertyConfigViewController.h
//  Chef.me
//
//  Created by Kushan Shah on 2/17/14.
//  Copyright (c) 2014 Codepath. All rights reserved.
//

#import "Parse/PFLogInViewController.h"

@interface PropertyConfigViewController : UIViewController <PFLogInViewControllerDelegate>

@property (nonatomic, strong) IBOutlet UILabel *facebookLabel;
@property (nonatomic, strong) IBOutlet UILabel *twitterLabel;
@property (weak, nonatomic) IBOutlet UIButton *facebookSignOutButton;
@property (weak, nonatomic) IBOutlet UIButton *twitterSignOutButton;

- (IBAction)logOutFacebookButtonTapAction:(id)sender;
- (IBAction)logOutTwitterTapAction:(id)sender;

@end
