//
//  ViewController.m
//  Todo
//
//  Created by Miguel Quezada on 25-07-22.
//

#import "ViewController.h"
#import "TodoViewController.h"

@interface ViewController ()
@end

@implementation ViewController

- (instancetype)initWithCoder:(NSCoder *)aDecoder {
  if (self = [super initWithCoder:aDecoder]) {
    TodoViewController *todoVC = [[TodoViewController alloc] init];
    [self addChildViewController:todoVC];
  }
  return self;
}

@end
