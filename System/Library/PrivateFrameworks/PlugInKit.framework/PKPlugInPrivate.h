/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSDate, NSXPCConnection, NSDictionary;


@protocol PKPlugInPrivate <PKPlugIn>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDate * timestamp; 
@property (readonly) NSXPCConnection * pluginConnection; 
@property (retain) NSDictionary * extensionState; 
@property (retain) NSDictionary * environment; 
@required
-(NSDictionary *)environment;
-(void)setEnvironment:(id)arg1;
-(NSDate *)timestamp;
-(NSUUID *)uuid;
-(NSXPCConnection *)pluginConnection;
-(NSDictionary *)extensionState;
-(void)setExtensionState:(id)arg1;

@end

