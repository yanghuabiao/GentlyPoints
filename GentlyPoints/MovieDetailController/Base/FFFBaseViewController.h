//
//  FFFBaseViewController.h
//  GentlyPoints
//
//  Created by 张冬冬 on 2019/4/10.
//  Copyright © 2019 MakerYang.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ErrorViewClickBlock)(void);
typedef void(^BottomErrorViewClickBlock)(void);
@interface FFFBaseViewController : UIViewController
- (void)addEmptyView;
- (void)addNetworkErrorView;
- (void)removeErrorView;

- (void)addBottomErrorView;
- (void)removeBottomErrorView;
@property (nonatomic, copy) ErrorViewClickBlock errorViewClickBlock;
@property (nonatomic, copy) BottomErrorViewClickBlock bottomErrorViewClickBlock;
@end

