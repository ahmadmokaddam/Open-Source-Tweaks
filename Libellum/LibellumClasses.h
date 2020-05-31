#import "LibellumView.h"

@interface CSNotificationAdjunctListViewController : UIViewController
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, assign) CGSize sizeToMimic;
@property (nonatomic, retain) LibellumView *LBMNoteView;
@end

@interface CSScrollView : UIScrollView
@end

@interface SBDashBoardNotificationAdjunctListViewController : UIViewController
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, assign) CGSize sizeToMimic;
@property (nonatomic, retain) LibellumView *LBMNoteView;
@end

@interface SBPagedScrollView : UIScrollView
@end
