/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libThreadExternalCommissioner.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol BorderAgentListener;
@class NSNetServiceBrowser, NSMutableArray, NSString;

@interface BorderAgentFinder : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSNetServiceBrowser* _browser;
	NSMutableArray* _borderAgents;
	id<BorderAgentListener> _delegate;

}

@property (__weak) id<BorderAgentListener> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BorderAgentListener>)delegate;
-(void)setDelegate:(id<BorderAgentListener>)arg1 ;
-(void)start;
-(void)stop;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(unsigned long long)getNumberOfBorderAgents;
-(id)getAgentDescription:(unsigned long long)arg1 ;
-(id)getBorderAgentAtIndex:(unsigned long long)arg1 ;
@end

