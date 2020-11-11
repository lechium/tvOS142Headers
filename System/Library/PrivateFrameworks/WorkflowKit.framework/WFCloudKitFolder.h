/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSData, NSString;

@interface WFCloudKitFolder : NSObject <WFCloudKitItem> {

	unsigned short _icon;
	CKRecordID* _identifier;
	NSData* _recordSystemFieldsData;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned short icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData;              //@synthesize recordSystemFieldsData=_recordSystemFieldsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)recordType;
+(BOOL)isFolderRecordID:(id)arg1 ;
+(id)recordIDWithZoneID:(id)arg1 collectionIdentifier:(id)arg2 ;
+(id)collectionIdentifierForRecordID:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(unsigned short)icon;
-(void)setIcon:(unsigned short)arg1 ;
-(NSData *)recordSystemFieldsData;
-(void)setRecordSystemFieldsData:(NSData *)arg1 ;
-(id)initWithCollection:(id)arg1 identifier:(id)arg2 ;
@end

