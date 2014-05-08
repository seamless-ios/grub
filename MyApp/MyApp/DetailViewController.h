//
//  DetailViewController.h
//  MyApp
//
//  Created by dcilia on 5/8/14.
//  Copyright (c) 2014 David Cilia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
