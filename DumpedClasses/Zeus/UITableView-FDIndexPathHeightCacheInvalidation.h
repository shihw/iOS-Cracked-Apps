//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (FDIndexPathHeightCacheInvalidation)
+ (void)load;
- (void)fd_moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)fd_reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)fd_deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)fd_insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)fd_moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)fd_reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)fd_deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)fd_insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)fd_reloadData;
- (void)fd_reloadDataWithoutInvalidateIndexPathHeightCache;
@end

