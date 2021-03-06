//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableSet, QQARConfigModel;

@interface QQARMcdonaldManager : NSObject
{
    QQARConfigModel *_arConfigModel;
    NSMutableArray *_fragmentModelList;
    NSMutableSet *_downloadTask;
    long long _currentIndex;
    long long _totalCount;
    id <QQARMcdonaldManagerDelegate> _delegate;
}

+ (id)instance;
@property(nonatomic) __weak id <QQARMcdonaldManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableSet *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) NSArray *fragmentModelList; // @synthesize fragmentModelList=_fragmentModelList;
@property(retain, nonatomic) QQARConfigModel *arConfigModel; // @synthesize arConfigModel=_arConfigModel;
- (void).cxx_destruct;
- (void)requestAward;
- (void)playNextFragModel;
- (void)playFirstFragmentModel;
- (void)playNext;
- (void)autoPlayNext;
- (void)clickedARVedio;
- (void)reset;
- (id)featureModel;
- (id)createARRendInfo;
- (void)startPlayARVideo;
- (_Bool)checkLocalVideoReadyWithModel:(id)arg1;
- (_Bool)checkLocalVedioAllReady;
- (void)startDownload;
- (void)startCheskDownload;
- (void)updateDesPath:(id)arg1;
- (id)fileDesPath:(id)arg1;
- (void)resetDownloadTask;
- (void)updataCurrentIndex:(long long)arg1 totalCount:(long long)arg2;
- (id)parserWithObject:(id)arg1;
- (void)parserObjectConfig:(id)arg1;
- (id)init;

@end

