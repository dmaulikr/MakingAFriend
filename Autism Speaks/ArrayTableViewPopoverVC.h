//
//  ArrayTableViewPopoverVC.h
//  Autism Speaks
//
//  Created by Gabriel Adauto on 4/13/13.
//  Copyright (c) 2013 Motion Math. All rights reserved.
//

#import "ViewController.h"

@protocol ArrayTableViewPopoverListener

- (void)arrayElementSelected:(NSString *)elementName;

@end

@interface ArrayTableViewPopoverVC : UITableViewController

@property (nonatomic, strong) id<ArrayTableViewPopoverListener> listener;

+ (ArrayTableViewPopoverVC *)makePopoverWithArray:(NSArray *)array fromView:(UIView *)view;

- (void)setArray:(NSArray *)arrayOfStrings;

@end