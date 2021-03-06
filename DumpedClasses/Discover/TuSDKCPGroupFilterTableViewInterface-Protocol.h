//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath;

@protocol TuSDKCPGroupFilterTableViewInterface <NSObject>
@property(nonatomic) id <TuSDKCPGroupFilterGroupCellDelegate> groupDelegate;
@property(nonatomic) _Bool allowsSelection;
@property(retain, nonatomic) NSArray *modeList;
@property(nonatomic) double cellWidth;
@property(retain, nonatomic) Class cellViewClazz;
@property(nonatomic) long long action;
@property(nonatomic) id <TuSDKCPGroupFilterTableViewDelegate> delegate;
- (void)scrollToRowAtIndexPath:(NSIndexPath *)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)deleteRowsAtIndexPaths:(NSArray *)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(NSArray *)arg1 withRowAnimation:(long long)arg2;
- (NSIndexPath *)indexPathForSelectedRow;
- (void)reloadData;
- (void)changeSelectPostion:(unsigned long long)arg1 scrollToCenter:(_Bool)arg2 anim:(_Bool)arg3;
- (void)selectPostion:(unsigned long long)arg1 scrollToCenter:(_Bool)arg2 reload:(_Bool)arg3;
@end

