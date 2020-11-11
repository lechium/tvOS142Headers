/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class TVLXMLNode;

@interface TVLJSNode : NSObject <TVLJSObject> {

	OpaqueJSValueRef jsObjectRef;
	TVLXMLNode* xmlNode;

}

@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef; 
@property (nonatomic,retain) TVLXMLNode * xmlNode; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)nodeInContext:(OpaqueJSContextRef)arg1 withNode:(id)arg2 ;
+(id)nodeFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
+(OpaqueJSValueRef)constructObjectWithClassName:(id)arg1 withTVLJSNodeClass:(Class)arg2 inContext:(OpaqueJSContextRef)arg3 ;
-(void)dealloc;
-(OpaqueJSValueRef)jsObjectRef;
-(void)setXmlNode:(TVLXMLNode *)arg1 ;
-(TVLXMLNode *)xmlNode;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
@end

