/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_os_activity, OS_dispatch_queue;
@class NSDictionary, NSObject, NSSet, PKDiscoveryLSWatcher, NSString;

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol> {

	int _annotationNotifyToken;
	NSDictionary* _attributes;
	unsigned long long _flags;
	/*^block*/id _report;
	NSObject*<OS_os_activity> _relatedActivity;
	NSSet* _lastResults;
	id _mcNotificationToken;
	PKDiscoveryLSWatcher* _lsWatcher;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _sync;

}

@property (retain) NSDictionary * attributes;                              //@synthesize attributes=_attributes - In the implementation block
@property (assign) unsigned long long flags;                               //@synthesize flags=_flags - In the implementation block
@property (copy) id report;                                                //@synthesize report=_report - In the implementation block
@property (retain) NSObject*<OS_os_activity> relatedActivity;              //@synthesize relatedActivity=_relatedActivity - In the implementation block
@property (retain) NSSet * lastResults;                                    //@synthesize lastResults=_lastResults - In the implementation block
@property (assign) int annotationNotifyToken;                              //@synthesize annotationNotifyToken=_annotationNotifyToken - In the implementation block
@property (retain) id mcNotificationToken;                                 //@synthesize mcNotificationToken=_mcNotificationToken - In the implementation block
@property (retain) PKDiscoveryLSWatcher * lsWatcher;                       //@synthesize lsWatcher=_lsWatcher - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> sync;                      //@synthesize sync=_sync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)flags;
-(void)cancel;
-(id)report;
-(NSDictionary *)attributes;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sync;
-(void)setSync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setReport:(id)arg1 ;
-(void)setRelatedActivity:(NSObject*<OS_os_activity>)arg1 ;
-(NSObject*<OS_os_activity>)relatedActivity;
-(void)removeWatchers;
-(void)setLastResults:(NSSet *)arg1 ;
-(int)annotationNotifyToken;
-(void)installWatchers;
-(NSSet *)lastResults;
-(void)setLsWatcher:(PKDiscoveryLSWatcher *)arg1 ;
-(void)performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2 ;
-(void)setAnnotationNotifyToken:(int)arg1 ;
-(void)setMcNotificationToken:(id)arg1 ;
-(PKDiscoveryLSWatcher *)lsWatcher;
-(id)mcNotificationToken;
-(id)initWithAttributes:(id)arg1 flags:(unsigned long long)arg2 report:(/*^block*/id)arg3 ;
-(void)_performWithPreviousResults:(id)arg1 forceNotify:(BOOL)arg2 uninstalledProxies:(id)arg3 ;
@end

