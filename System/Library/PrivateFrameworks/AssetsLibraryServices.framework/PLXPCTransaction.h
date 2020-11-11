/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject;

@interface PLXPCTransaction : NSObject {

	const char* _identifier;
	NSObject*<OS_os_transaction> _transaction;

}
+(void)initialize;
+(id)callStackSymbols;
+(void)_stopTrackingTransaction:(id)arg1 ;
+(void)_startTrackingTransaction:(id)arg1 ;
+(void)discardCallStackSymbols:(id)arg1 ;
+(id)transaction:(const char*)arg1 ;
+(id)openXPCTransactionStatus;
-(id)description;
-(void)dealloc;
-(id)initWithIdentifier:(const char*)arg1 ;
-(void)stillAlive;
-(id)_statusDescription;
@end

