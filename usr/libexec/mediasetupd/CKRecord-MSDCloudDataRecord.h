//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (MSDCloudDataRecord)
+ (id)createRecordWithName:(id)arg1 recordType:(id)arg2 recordZone:(id)arg3;	// IMP=0x0000000100030dac
- (void)_attemptToLoadPublicInfoAgain;	// IMP=0x0000000100031b0c
- (id)createMediaServiceObjectFromRecord;	// IMP=0x0000000100031554
- (void)populateCKRecordInfo:(id)arg1 userInfo:(id)arg2 recordType:(id)arg3;	// IMP=0x0000000100030f70
- (void)setRecordFieldForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000100030ee8
- (id)recordFieldForKey:(id)arg1;	// IMP=0x0000000100030e68
@end

