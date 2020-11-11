/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppSupportUI/AppSupportUI-Structs.h>
@interface NUISizeCache : NSObject {

	nui_size_cache* _sizeCache;
	BOOL _threadSafe;

}
-(void)dealloc;
-(void)invalidateCache;
-(id)initForAsynchronousAccess:(BOOL)arg1 ;
-(BOOL)getSize:(CGSize*)arg1 forTargetSize:(CGSize)arg2 isSizeDependentOnPerpendicularAxis:(BOOL)arg3 ;
-(void)insertSize:(CGSize)arg1 forTargetSize:(CGSize)arg2 ;
@end

