/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoPackageAnalyzerDelegate.h>

@interface HMIVideoPackageAnalyzerDelegateAdapter : HMFObject <HMIVideoPackageAnalyzerDelegate> {

	/*^block*/id _packageAnalyzerDidDetectPackage;

}

@property (copy) id packageAnalyzerDidDetectPackage;              //@synthesize packageAnalyzerDidDetectPackage=_packageAnalyzerDidDetectPackage - In the implementation block
-(id)packageAnalyzerDidDetectPackage;
-(void)packageAnalyzer:(id)arg1 didDetectPackage:(id)arg2 error:(id)arg3 ;
-(void)setPackageAnalyzerDidDetectPackage:(id)arg1 ;
@end

