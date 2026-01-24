#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTalkingFaceWidget.generated.h"

class UHbkTalkFace2DKit;
class UHbkTalkFace2DKitInstance;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTalkingFaceWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableWhenPause;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UHbkTalkFace2DKitInstance*> FaceKits;
    
public:
    UHbkTalkingFaceWidget();

    UFUNCTION(BlueprintCallable)
    void UnLoadFace2D();
    
    UFUNCTION(BlueprintCallable)
    void LoadStartFace2D(FName EmotionKey, const UHbkTalkFace2DKit* Face2DKit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingFace2D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmptyFace2D() const;
    
};

