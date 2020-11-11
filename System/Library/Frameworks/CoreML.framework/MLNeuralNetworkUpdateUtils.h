/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreML/CoreML-Structs.h>
@interface MLNeuralNetworkUpdateUtils : NSObject
+(BOOL)loadUpdateParameters:(NetworkUpdateParameters*)arg1 fromCompiledArchive:(MLModelInputArchiver*)arg2 error:(id*)arg3 ;
+(id)loadParameterDescriptionsAndContainerFromUpdateParameters:(const NetworkUpdateParameters*)arg1 modelDescription:(id)arg2 ;
+(id)createClassLabelToIndexMapWith:(id)arg1 ;
@end

