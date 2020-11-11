/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
#import <DeviceManagement/DeviceManagement-Structs.h>
@class NSString, NSObject;

@interface DMFOSStateHandler : NSObject {

	/*^block*/id _block;
	NSString* _name;
	unsigned long long _handle;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(unsigned long long)handle;
-(void)setName:(NSString *)arg1 ;
-(id)block;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setBlock:(id)arg1 ;
-(void)setHandle:(unsigned long long)arg1 ;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(os_state_data_s*)_serializeState;
-(id)initWithQueue:(id)arg1 name:(id)arg2 stateHandlerBlock:(/*^block*/id)arg3 ;
@end

