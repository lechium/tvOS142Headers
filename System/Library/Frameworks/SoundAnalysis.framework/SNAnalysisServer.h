/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, SNSystemServiceResourceCoordinator, NSString;

@interface SNAnalysisServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	SNSystemServiceResourceCoordinator* _coordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)launchAsMachServiceWithName:(id)arg1 ;
+(id)launchWithResourceCoordinator:(id)arg1 onXPCListener:(id)arg2 ;
+(id)launchDefaultServer;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(id)initWithResourceCoordinator:(id)arg1 onListener:(id)arg2 ;
-(id)connectLocally;
@end
