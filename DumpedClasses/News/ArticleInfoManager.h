//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, SSOperationStack, TTActivityModel, TTDetailModel, TTGroupModel, _ArticleInfoManagerModel;

@interface ArticleInfoManager : NSObject
{
    id <ArticleInfoManagerDelegate> _delegate;
    TTDetailModel *_detailModel;
    NSMutableDictionary *_video_detail_tags;
    SSOperationStack *_operationStack;
    NSMutableArray *_operations;
    TTGroupModel *_groupModel;
    _ArticleInfoManagerModel *_infoModel;
}

@property(retain, nonatomic) _ArticleInfoManagerModel *infoModel; // @synthesize infoModel=_infoModel;
@property(retain, nonatomic) TTGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) SSOperationStack *operationStack; // @synthesize operationStack=_operationStack;
@property(retain, nonatomic) NSMutableDictionary *video_detail_tags; // @synthesize video_detail_tags=_video_detail_tags;
@property(retain, nonatomic) TTDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) __weak id <ArticleInfoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *relateSearchWordsArray;
- (void)setRelateSearchWordsArray:(id)arg1;
@property(retain, nonatomic) NSArray *dislikeWords;
@property(readonly, retain, nonatomic) NSNumber *flags;
- (void)setFlags:(id)arg1;
@property(readonly, nonatomic) TTActivityModel *promotionModel;
- (void)setPromotionModel:(id)arg1;
@property(readonly, nonatomic) NSDictionary *adShareInfo;
- (void)setAdShareInfo:(id)arg1;
@property(readonly, nonatomic) NSNumber *articlePosition;
- (void)setArticlePosition:(id)arg1;
@property(readonly, nonatomic) unsigned long long likeAndShareFlag;
- (void)setLikeAndShareFlag:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *videoExtendLink;
- (void)setVideoExtendLink:(id)arg1;
@property(readonly, retain, nonatomic) NSMutableArray *classNameList;
- (void)setClassNameList:(id)arg1;
@property(readonly, retain, nonatomic) NSMutableDictionary *ordered_info;
- (void)setOrdered_info:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *forumLinkJson;
- (void)setForumLinkJson:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *corperationVideoDict;
- (void)setCorperationVideoDict:(id)arg1;
@property(readonly, retain, nonatomic) NSString *pgcActionEnterTitleStr;
- (void)setPgcActionEnterTitleStr:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *adminDebugInfo;
- (void)setAdminDebugInfo:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *detailADJsonDict;
- (void)setDetailADJsonDict:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *relateEnterJson;
- (void)setRelateEnterJson:(id)arg1;
@property(readonly, retain, nonatomic) NSNumber *relateVideoSection;
- (void)setRelateVideoSection:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *webRecommandPhotosArray;
- (void)setWebRecommandPhotosArray:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *wendaArray;
- (void)setWendaArray:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *relateImagesArticles;
- (void)setRelateImagesArticles:(id)arg1;
@property(readonly, copy, nonatomic) NSString *videoAbstract;
- (void)setVideoAbstract:(id)arg1;
@property(readonly, nonatomic) NSDictionary *videoEmbededAdInfo;
- (void)setVideoEmbededAdInfo:(id)arg1;
@property(readonly, nonatomic) NSDictionary *videoBanner;
- (void)setVideoBanner:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *relateVideoArticles;
- (void)setRelateVideoArticles:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *keywordJsons;
- (void)setKeywordJsons:(id)arg1;
@property(readonly, copy, nonatomic) NSString *videoAdUrl;
- (void)setVideoAdUrl:(id)arg1;
@property(readonly, copy, nonatomic) NSString *riskWarningTip;
- (void)setRiskWarningTip:(id)arg1;
@property(readonly, copy, nonatomic) NSString *insertedContextJS;
- (void)setInsertedContextJS:(id)arg1;
@property(readonly, copy, nonatomic) NSString *insertedJavaScript;
- (void)setInsertedJavaScript:(id)arg1;
@property(readonly, copy, nonatomic) NSString *webViewTrackKey;
- (void)setWebViewTrackKey:(id)arg1;
- (id)makeADShareInfo;
- (_Bool)needShowAdShare;
- (_Bool)needShowCorperationVideoView;
- (unsigned long long)relatedVideoTypeFromString:(id)arg1;
- (id)relatedVideoExtraDictFromDict:(id)arg1;
- (id)relatedVideosWithArr:(id)arg1;
- (id)relatedSearchWordsWithArr:(id)arg1;
- (id)relatedArticlesWithArr:(id)arg1;
- (void)relatedOrderInfoWithArr:(id)arg1;
- (void)startFetchArticleInfo:(id)arg1;
- (void)parseResponseObj:(id)arg1 error:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)startFetchArticleInfo:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)cancelAllRequest;
- (id)init;
- (void)dealloc;

@end

