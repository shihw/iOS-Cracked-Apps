//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FAFullViewViewerListViewDelegate.h"

@class FAFullViewViewerListView, NSString;

@interface FAFullViewerListViewController : NSObject <FAFullViewViewerListViewDelegate>
{
    id <FAFullViewerListViewControllerDelegate> _delegate;
    FAFullViewViewerListView *_viewerView;
}

@property(retain, nonatomic) FAFullViewViewerListView *viewerView; // @synthesize viewerView=_viewerView;
@property(nonatomic) __weak id <FAFullViewerListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)destroy;
- (id)getLiveRoomInfo;
- (_Bool)getLiveStaue;
- (void)showMessageWithContent:(id)arg1 duration:(double)arg2 isSucess:(_Bool)arg3;
- (void)dismissMessageWithContent:(id)arg1 afterDelay:(double)arg2 isSucess:(_Bool)arg3;
- (void)showWithViewerListStatus:(id)arg1;
- (void)getListDataWithRoomId:(long long)arg1 starId:(long long)arg2;
- (void)showViewListViewInSuperView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

