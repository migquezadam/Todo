//
//  TodoSectionController.h
//  Todo
//
//  Created by Miguel Quezada on 25-07-22.
//

#import <IGListKit/IGListKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TodoSectionController : IGListSectionController
- (instancetype)initWithTodos:(NSArray<NSString *> *)todos deleteCallback:(void (^)(NSInteger index))deleteCallback;

@end
NS_ASSUME_NONNULL_END
