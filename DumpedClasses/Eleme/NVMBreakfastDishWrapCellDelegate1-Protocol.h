//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSIndexPath, NVMBreakfastDayDish1, NVMBreakfastDishDeadlineView1, NVMBreakfastDishTableView1, UIButton, UIScrollView;

@protocol NVMBreakfastDishWrapCellDelegate1
- (void)NVMBreakfastDishDeadlineView:(NVMBreakfastDishDeadlineView1 *)arg1 toOrderButton:(UIButton *)arg2;
- (void)NVMBreakfastScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)NVMBreakfastscrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)NVMBreakfastScrollViewDidScroll:(UIScrollView *)arg1 contentOffset:(double)arg2;
- (void)NVMBreakfastScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)NVMBreakfastDishCollectionView:(NVMBreakfastDishTableView1 *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2 dayDish:(NVMBreakfastDayDish1 *)arg3;
@end

