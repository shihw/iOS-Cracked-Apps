//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString<Optional>;

@interface ONEOneKeyReportBaseModel : TRBaseModel
{
    NSString<Optional> *_error_info;
    NSString<Optional> *_reportid;
    NSString<Optional> *_toast;
    NSString<Optional> *_eventid;
    NSString<Optional> *_number;
}

@property(retain, nonatomic) NSString<Optional> *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString<Optional> *eventid; // @synthesize eventid=_eventid;
@property(retain, nonatomic) NSString<Optional> *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) NSString<Optional> *reportid; // @synthesize reportid=_reportid;
@property(retain, nonatomic) NSString<Optional> *error_info; // @synthesize error_info=_error_info;
- (void).cxx_destruct;

@end

