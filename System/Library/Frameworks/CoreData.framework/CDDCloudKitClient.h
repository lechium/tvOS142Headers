/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface CDDCloudKitClient : NSObject {

	BOOL _interrupted;
	BOOL _invalidated;
	NSXPCConnection* _connection;

}
-(void)dealloc;
-(BOOL)_valid;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)handleMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

