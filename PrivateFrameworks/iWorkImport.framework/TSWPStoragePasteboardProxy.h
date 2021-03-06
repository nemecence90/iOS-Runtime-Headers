/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPStyleProvider>, TSWPStorage;

@interface TSWPStoragePasteboardProxy : TSPObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    TSWPStorage *_storage;
    <TSWPStyleProvider> *_styleProvider;
}

@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } storageRange;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithContext:(id)arg1 storage:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 styleProvider:(id)arg4;
- (void)saveToArchiver:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })storageRange;

@end
