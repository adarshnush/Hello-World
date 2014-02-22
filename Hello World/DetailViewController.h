//
//  DetailViewController.h
//  Hello World
//
//  Created by Shankar Balasubramanian on 22/2/14.
//  Copyright (c) 2014 Shankar Balasubramanian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
