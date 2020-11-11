/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/VMUFieldInfo.h>

@class NSString, VMUClassInfo;

@interface VMUMutableFieldInfo : VMUFieldInfo

@property (assign,nonatomic) unsigned scannableSize; 
@property (assign,nonatomic) unsigned stride; 
@property (assign,nonatomic) unsigned flags; 
@property (assign,nonatomic) BOOL isCapture; 
@property (assign,nonatomic) BOOL isByref; 
@property (nonatomic,copy) NSString * ivarName; 
@property (nonatomic,copy) NSString * typeName; 
@property (assign,nonatomic) unsigned scanType; 
@property (nonatomic,retain) VMUClassInfo * destinationLayout; 
-(void)setStride:(unsigned)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(void)setSize:(unsigned)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setScanType:(unsigned)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(void)setDestinationLayout:(VMUClassInfo *)arg1 ;
-(void)setIsCapture:(BOOL)arg1 ;
-(void)setIsByref:(BOOL)arg1 ;
-(BOOL)replaceFieldRecursively:(id)arg1 withField:(id)arg2 ;
-(void)mutateTypeFieldsRecursivelyWithBlock:(/*^block*/id)arg1 parentOffset:(unsigned)arg2 ;
-(void)setScannableSize:(unsigned)arg1 ;
-(void)setIvarName:(NSString *)arg1 ;
-(void)addSubField:(id)arg1 ;
@end

