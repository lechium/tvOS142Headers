/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@interface HVFLoader : NSObject {

	LoaderCBF* loader;

}

@property (nonatomic,readonly) id partLoader; 
-(id)initWithTableData:(id)arg1 ;
-(unsigned long long)countParts;
-(id)partLoader;
-(HVF_Part*)loadPartAtIndex:(unsigned long long)arg1 usingPartCache:(HVF_PartCache*)arg2 ;
@end

