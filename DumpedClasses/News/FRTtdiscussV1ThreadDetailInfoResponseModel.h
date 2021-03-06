//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRForumStructModel, FRGroupInfoStructModel<Optional>, FRLoginUserInfoStructModel, FRThreadDataStructModel, FRUgcDataStructModel<Optional>, NSNumber, NSNumber<Optional>, NSString, NSString<Optional>;

@interface FRTtdiscussV1ThreadDetailInfoResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    FRThreadDataStructModel *_thread;
    NSString<Optional> *_float_layer_info;
    NSString<Optional> *_like_desc;
    NSString<Optional> *_err_tips;
    FRLoginUserInfoStructModel *_login_user_info;
    NSString<Optional> *_open_url;
    FRForumStructModel *_forum_info;
    NSString *_h5_extra;
    NSString *_forum_extra;
    FRUgcDataStructModel<Optional> *_origin_thread;
    FRGroupInfoStructModel<Optional> *_origin_group;
    NSString<Optional> *_content_rich_span;
    NSNumber<Optional> *_repost_type;
}

@property(retain, nonatomic) NSNumber<Optional> *repost_type; // @synthesize repost_type=_repost_type;
@property(retain, nonatomic) NSString<Optional> *content_rich_span; // @synthesize content_rich_span=_content_rich_span;
@property(retain, nonatomic) FRGroupInfoStructModel<Optional> *origin_group; // @synthesize origin_group=_origin_group;
@property(retain, nonatomic) FRUgcDataStructModel<Optional> *origin_thread; // @synthesize origin_thread=_origin_thread;
@property(retain, nonatomic) NSString *forum_extra; // @synthesize forum_extra=_forum_extra;
@property(retain, nonatomic) NSString *h5_extra; // @synthesize h5_extra=_h5_extra;
@property(retain, nonatomic) FRForumStructModel *forum_info; // @synthesize forum_info=_forum_info;
@property(retain, nonatomic) NSString<Optional> *open_url; // @synthesize open_url=_open_url;
@property(retain, nonatomic) FRLoginUserInfoStructModel *login_user_info; // @synthesize login_user_info=_login_user_info;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSString<Optional> *like_desc; // @synthesize like_desc=_like_desc;
@property(retain, nonatomic) NSString<Optional> *float_layer_info; // @synthesize float_layer_info=_float_layer_info;
@property(retain, nonatomic) FRThreadDataStructModel *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

