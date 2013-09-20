/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNContentAwareTextureGenerator : NSObject {
}

+ (void)addLayersWithTag:(id)arg1 plugin:(id)arg2 baseLayer:(id)arg3 backgroundLayer:(id)arg4 textures:(id)arg5;
+ (id)generateTexturesTagsAndAttributesForASV:(id)arg1 plugin:(id)arg2;
+ (void)p_addBlackBackgroundLayerWithTag:(id)arg1 asv:(id)arg2 plugin:(id)arg3 addToTextures:(id)arg4;
+ (void)p_addLayersForInfos:(id)arg1 tag:(id)arg2 isBackground:(BOOL)arg3 asv:(id)arg4 plugin:(id)arg5 addToTextures:(id)arg6;
+ (void)p_generateLayersForTexture:(id)arg1 tag:(id)arg2 isBackground:(BOOL)arg3 isMagicMove:(BOOL)arg4 addToTextures:(id)arg5;
+ (void)p_preloadTexturesConcurrentlyWithInfos:(id)arg1 asv:(id)arg2 plugin:(id)arg3;

@end