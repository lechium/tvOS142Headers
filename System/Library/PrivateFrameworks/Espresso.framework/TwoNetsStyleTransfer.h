/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Espresso/Espresso-Structs.h>
@class NSString;

@interface TwoNetsStyleTransfer : NSObject {

	void* ctx;
	void* plan;
	SCD_Struct_Es3* net;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > output_layer_name;
	unsigned long long dim_data0[5];
	unsigned long long dim_data0__small[5];
	unsigned long long dim_data2[5];
	unsigned long long dim_data2__small[5];
	IOSurfaceRef result;
	postprocessing_settings_t current_postprocessing_settings;
	NSString* currentNetworkPath;

}
+(BOOL)supportsANE;
-(id)init;
-(void)dealloc;
-(int)load:(id)arg1 outputName:(id)arg2 ;
-(int)widthSmall;
-(int)widthBig;
-(int)heightSmall;
-(int)heightBig;
-(IOSurfaceRef)executeSyncWithImage:(CVBufferRef)arg1 smallImage:(CVBufferRef)arg2 ;
@end

