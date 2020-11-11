/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface WLKTransactionScope : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _identifier;
	double _delay;

}

@property (readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) double delay;                                          //@synthesize delay=_delay - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(double)delay;
-(id)initWithIdentifier:(id)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(id)initWithIdentifier:(id)arg1 delay:(double)arg2 ;
@end
