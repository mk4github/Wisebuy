//
//  DetailViewController.h
//  Wisebuy
//
//  Created by Rez Florendo on 6/17/13.
//  Copyright (c) 2013 Rez Florendo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
