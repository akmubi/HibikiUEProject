#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkFullScreenMovieWidget.generated.h"

class UImage;
class UMaterialInterface;
class UOverlay;
class UTexture;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkFullScreenMovieWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BinkMaterial;
    
public:
    UHbkFullScreenMovieWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetScreenPanel(UImage* InScreenImage, UOverlay* InScreenOverlay);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetImage2D(UTexture2D* Tex2D, float NewBlendTime, float Opacity);
    
    UFUNCTION(BlueprintCallable)
    void SetImage(UTexture* Tex);
    
    UFUNCTION(BlueprintCallable)
    void SetBinkMovie(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void PlayMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBinkMovie() const;
    
    UFUNCTION(BlueprintCallable)
    void EndMovie();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ResetDefaultMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPlayMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndMovie();
    
};

