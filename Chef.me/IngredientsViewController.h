//
//  IngredientsViewController.h
//  Chef.me
//
//  Created by Bhagyashree Shekhawat on 2/18/14.
//  Copyright (c) 2014 Codepath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"
@interface IngredientsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property(nonatomic, strong) Recipe* recipe;
@end