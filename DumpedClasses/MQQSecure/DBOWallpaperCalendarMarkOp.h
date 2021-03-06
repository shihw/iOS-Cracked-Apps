//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQDBWrapper;

@interface DBOWallpaperCalendarMarkOp : NSObject
{
    MQQDBWrapper *_dbWrapper;
}

- (long long)dayForTimeNumber:(long long)arg1;
- (long long)timeNumberForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (_Bool)removeCalendarMarksBeforeYear:(long long)arg1 month:(long long)arg2;
- (id)calendarMarksForYear:(long long)arg1 month:(long long)arg2;
- (_Bool)hasLocalNotificationForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)allLocalNotifications;
- (_Bool)removeLocalNotificationForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (_Bool)setLocalNotificationForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (_Bool)removeCalendarMarkForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (_Bool)insertCalendarMarkForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end

