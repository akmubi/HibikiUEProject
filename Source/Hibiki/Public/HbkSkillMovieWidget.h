#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkSkillMovieWidget.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;
class UMaterialInterface;
class UMediaPlayer;
class UMediaSource;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSkillMovieWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* Skill_BinkPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* Skill_BinkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Skill_BinkMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* Tutorial_BinkPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* Tutorial_BinkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Tutorial_BinkMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MP;
    
public:
    UHbkSkillMovieWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUp_TutorialMovie(bool bBink);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUp_SkillMovie(bool bBink);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMovie(UMediaSource* MediaSource);
    
};

