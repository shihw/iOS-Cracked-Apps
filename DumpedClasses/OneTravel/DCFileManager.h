//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DCFileManager : NSObject
{
}

+ (void)parseCacheOption:(long long)arg1 optionModel:(id)arg2;
+ (_Bool)deleteValueForKey:(id)arg1 optionModel:(id)arg2;
+ (_Bool)deleteValueForKey:(id)arg1 optionBlock:(CDUnknownBlockType)arg2;
+ (_Bool)deleteValueForKey:(id)arg1 option:(long long)arg2;
+ (id)valueForKey:(id)arg1 optionBlock:(CDUnknownBlockType)arg2;
+ (id)valueForKey:(id)arg1 optionModel:(id)arg2;
+ (id)valueForKey:(id)arg1 option:(long long)arg2;
+ (id)valueForKey:(id)arg1;
+ (id)saveValue:(id)arg1 toKey:(id)arg2 optionBlock:(CDUnknownBlockType)arg3;
+ (id)saveValue:(id)arg1 toKey:(id)arg2 optionModel:(id)arg3;
+ (id)saveValue:(id)arg1 toKey:(id)arg2 option:(long long)arg3;
+ (id)saveValue:(id)arg1 toKey:(id)arg2;
+ (_Bool)removeArchvieValueForKey:(id)arg1 fileOption:(id)arg2;
+ (id)localPath:(id)arg1 option:(id)arg2;
+ (id)archiveValueForKey:(id)arg1 fileOption:(id)arg2;
+ (void)saveValue:(id)arg1 toArchiveKey:(id)arg2 fileOption:(id)arg3;
+ (id)settingValueForKey:(id)arg1 option:(id)arg2;
+ (void)setSettingValue:(id)arg1 forKey:(id)arg2 option:(id)arg3;
+ (void)setSetting:(id)arg1 option:(id)arg2;
+ (id)settingWithOption:(id)arg1;
+ (id)settingKeyWithOption:(id)arg1;

@end
