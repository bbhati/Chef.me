//
//  StripeViewController.h
//  Chef.me
//
//  Created by Kushan Shah on 2/17/14.
//  Copyright (c) 2014 Codepath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Stripe/STPView.h"

@interface StripeViewController : UIViewController <STPViewDelegate>
- (IBAction)onTapButton:(id)sender;

@end
