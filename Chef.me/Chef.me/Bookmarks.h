//
//  Bookmarks.h
//  Chef.me
//
//  Created by Kushan Shah on 2/17/14.
//  Copyright (c) 2014 Codepath. All rights reserved.
//

#import <Parse/Parse.h>

@interface Bookmarks : PFObject<PFSubclassing>
+ (NSString *)parseClassName;
@property (retain) NSString *userName;

@end
