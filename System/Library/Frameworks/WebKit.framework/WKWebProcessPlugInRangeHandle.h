/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebProcessPlugInFrame, NSString;

@interface WKWebProcessPlugInRangeHandle : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleRangeHandle> _rangeHandle;

}

@property (readonly) InjectedBundleRangeHandle* _rangeHandle; 
@property (nonatomic,readonly) WKWebProcessPlugInFrame * frame; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rangeHandleWithJSValue:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(NSString *)text;
-(WKWebProcessPlugInFrame *)frame;
-(Object*)_apiObject;
-(InjectedBundleRangeHandle*)_rangeHandle;
-(id)detectDataWithTypes:(unsigned long long)arg1 context:(id)arg2 ;
@end

