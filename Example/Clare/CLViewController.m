//
//  CLViewController.m
//  Clare
//
//  Created by zekail on 11/09/2018.
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
    //[self performSelector:@selector(secondMethod) withObject:nil afterDelay:15.0 ];
}

-(void)secondMethod{
    [[Clare sharedManager] hide];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
