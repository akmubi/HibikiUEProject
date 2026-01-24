#pragma once
#include "CoreMinimal.h"
#include "EHbkStoreCharacterType.h"
#include "HbkStoreMenuBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkStoreMenuAttacksWidget.generated.h"

class UAkAudioEvent;
class UHbkSkillMovieWidget;
class UHbkStoreMenuAttacksCharacterTabWidget;
class UHbkTutorialDataObject_MovieType;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuAttacksWidget : public UHbkStoreMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LargeSkillMovieOpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LargeSkillMovieCloseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_MovieType> TutorialPagePartnerAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStoreMenuAttacksCharacterTabWidget* CharacterTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkillMovieWidget* LargeSkillMovie;
    
public:
    UHbkStoreMenuAttacksWidget();

private:
    UFUNCTION(BlueprintCallable)
    void CreateProductList(EHbkStoreCharacterType CharacterType);
    
};

