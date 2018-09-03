//
//  CLViewController.m
//  Clare
//
//  Created by zekail on 09/03/2018.
//  Copyright (c) 2018 zekail. All rights reserved.
//

#import "CLViewController.h"
#import <Clare/Clare.h>


@interface CLViewController ()

@end

@implementation CLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    [[Clare sharedManager] show];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)setEn:(UIButton *)sender {
    NSLog(@"english");
    [[Clare sharedManager]setLanguages:[[NSMutableArray alloc] initWithObjects:@"en_US", nil]];
}

- (IBAction)setZH:(UIButton *)sender {
    NSLog(@"chinese");
    [[Clare sharedManager]setLanguages:[[NSMutableArray alloc] initWithObjects:@"zh_HK", nil]];
}
@end
