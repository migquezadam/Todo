//
//  TodoCell.h
//  Todo
//
//  Created by Miguel Quezada on 25-07-22.
//

#import "MaterialButtons.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TodoCell : UICollectionViewCell

@property(nonatomic, copy) NSString *text;
@property(nonatomic, readonly) MDCButton *deleteButton;

@end

NS_ASSUME_NONNULL_END
