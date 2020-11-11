/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKDiscoverUserInfosOperation : CKOperation {

	NSArray* _emailAddresses;
	NSArray* _userRecordIDs;
	/*^block*/id _discoverUserInfosCompletionBlock;

}

@property (nonatomic,copy) NSArray * emailAddresses;                         //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * userRecordIDs;                          //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (nonatomic,copy) id discoverUserInfosCompletionBlock;              //@synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock - In the implementation block
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2 ;
-(NSArray *)userRecordIDs;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(id)discoverUserInfosCompletionBlock;
-(void)setDiscoverUserInfosCompletionBlock:(id)arg1 ;
@end

