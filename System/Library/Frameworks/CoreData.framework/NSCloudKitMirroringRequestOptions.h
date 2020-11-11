/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject {

	CKOperationConfiguration* _operationConfiguration;

}

@property (nonatomic,retain) CKOperationConfiguration * operationConfiguration;              //@synthesize operationConfiguration=_operationConfiguration - In the implementation block
@property (assign,nonatomic) long long qualityOfService; 
@property (assign,nonatomic) BOOL allowsCellularAccess; 
-(id)copy;
-(id)init;
-(void)dealloc;
-(BOOL)allowsCellularAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(CKOperationConfiguration *)operationConfiguration;
@end

