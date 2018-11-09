//
//  CLViewController2.m
//  Clare_Example
//
//  Created by LiuZekai on 2018/11/9.
//  Copyright © 2018 zekail. All rights reserved.
//

#import "CLViewController2.h"
#import <Clare/Clare.h>

@interface CLViewController2 ()

@end

@implementation CLViewController2

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    [[Clare sharedManager] hide];
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)back:(id)sender {
    [self dismissViewControllerAnimated:YES completion:Nil];
}
@end
