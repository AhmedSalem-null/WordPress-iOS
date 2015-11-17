#import <UIKit/UIKit.h>

@class Menu;

@protocol MenuItemsViewDelegate;

@interface MenuItemsView : UIView

@property (nonatomic, weak) id <MenuItemsViewDelegate> delegate;
@property (nonatomic, strong) Menu *menu;

@end

@protocol MenuItemsViewDelegate <NSObject>

- (void)itemsViewAnimatingContentSizeChanges:(MenuItemsView *)itemsView focusedRect:(CGRect)focusedRect updatedFocusRect:(CGRect)updatedFocusRect;

@end
