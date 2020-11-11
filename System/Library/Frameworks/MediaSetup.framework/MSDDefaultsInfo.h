/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MediaService, NSUUID;

@interface MSDDefaultsInfo : NSObject <NSSecureCoding> {

	NSString* _recordName;
	NSString* _recordZoneName;
	NSString* _recordType;
	MediaService* _service;
	NSUUID* _homeID;
	NSUUID* _homeUserID;

}

@property (nonatomic,copy) NSString * recordName;                   //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,copy) NSString * recordZoneName;               //@synthesize recordZoneName=_recordZoneName - In the implementation block
@property (nonatomic,copy) NSString * recordType;                   //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,readonly) MediaService * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSUUID * homeID;                     //@synthesize homeID=_homeID - In the implementation block
@property (nonatomic,readonly) NSUUID * homeUserID;                 //@synthesize homeUserID=_homeUserID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MediaService *)service;
-(NSString *)recordName;
-(NSString *)recordType;
-(void)setRecordName:(NSString *)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(id)initWithService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 ;
-(NSString *)recordZoneName;
-(void)setRecordZoneName:(NSString *)arg1 ;
-(NSUUID *)homeID;
-(NSUUID *)homeUserID;
@end
